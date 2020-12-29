<?php
$z[0]=Array("global","",132,158);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("channelartlist","\r\n                    <li class=\"menu-item-has-children\">\r\n                        <a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a>\r\n                        <ul {dede:field name=typeid runphp=\"yes\"}\r\n                            global \$dsql;\r\n                            \$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n                            \$row = \$dsql->GetOne(\$sql);\r\n                            @me=is_array(\$row)?'class=\"sub-menu\"':'style=\"display:none\"';\r\n                            {/dede:field}>\r\n                            {dede:channel type='son' noself='yes'}\r\n                            <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n                            {/dede:channel}\r\n                        </ul>\r\n                    </li>\r\n                    ",471,1401);
$z[1][4]=array();
$z[1][4]['typeid']="top";
$z[2]=Array("arclist","\r\n                        <li class=\"first\">\r\n                            <span class=\"time\">[field:pubdate function=\"MyDate('y-m-d',@me)\"/]</span>\r\n                            <a target=\"_blank\" href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\">[field:title/]</a>\r\n                        </li>\r\n                        ",1879,2262);
$z[2][4]=array();
$z[2][4]['typeid']="6";
$z[2][4]['titlelen']="40";
$z[2][4]['row']="5";

?>