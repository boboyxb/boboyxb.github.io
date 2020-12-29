<?php
$z[0]=Array("field","",71,99);
$z[0][4]=array();
$z[0][4]['name']="typeurl";
$z[1]=Array("field","",101,130);
$z[1][4]=array();
$z[1][4]['name']="typename";
$z[2]=Array("field","\r\n                            global \$dsql;\r\n                            \$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n                            \$row = \$dsql->GetOne(\$sql);\r\n                            @me=is_array(\$row)?'class=\"sub-menu\" style=\"display: none;\"':'style=\"display:none\"';\r\n                            ",164,595);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channel","\r\n                            <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n                            ",626,796);
$z[3][4]=array();
$z[3][4]['type']="son";
$z[3][4]['noself']="yes";

?>