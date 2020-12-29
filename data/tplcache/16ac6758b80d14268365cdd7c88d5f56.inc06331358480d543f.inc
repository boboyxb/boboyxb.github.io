<?php
$z[0]=Array("field","",70,98);
$z[0][4]=array();
$z[0][4]['name']="typeurl";
$z[1]=Array("field","",100,129);
$z[1][4]=array();
$z[1][4]['name']="typename";
$z[2]=Array("field","\r\n                            global \$dsql;\r\n                            \$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n                            \$row = \$dsql->GetOne(\$sql);\r\n                            @me=is_array(\$row)?'class=\"sub-menu\"':'style=\"display:none\"';\r\n                            ",163,571);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channel","\r\n                            <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n                            ",602,772);
$z[3][4]=array();
$z[3][4]['type']="son";
$z[3][4]['noself']="yes";

?>