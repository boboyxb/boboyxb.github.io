<?php
$z[0]=Array("field","",77,96);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",97,123);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",164,186);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",226,277);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1885,1922);
$z[4][4]=array();
$z[4][4]['filename']="head_m.htm";
$z[5]=Array("type","[field:typename/]",2011,2051);
$z[5][4]=array();
$z[6]=Array("field","",2096,2118);
$z[6][4]=array();
$z[6][4]['name']="position";
$z[7]=Array("channel","\r\n            <a href=\"list.php?tid=[field:id/]\">[field:typename/]</a>\r\n            ",2191,2315);
$z[7][4]=array();
$z[7][4]['type']="son";
$z[8]=Array("list","\r\n                <li>\r\n                    <span>[field:pubdate function='strftime(\"%y-%m\",@me)'/]<br><strong>[field:pubdate function='strftime(\"%d\",@me)'/]</strong></span>\r\n                    <div>\r\n                        <a href=\"view.php?aid=[field:id/]\"><h4>[field:title/]</h4></a>\r\n                        <p>[field:description function=\"cn_substr(@me,300)\"/]...</p>\r\n                    </div>\r\n                </li>\r\n                ",2562,3041);
$z[8][4]=array();
$z[8][4]['pagesize']="6";
$z[9]=Array("pagelist","",3118,3196);
$z[9][4]=array();
$z[9][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",3255,3292);
$z[10][4]=array();
$z[10][4]['filename']="foot_m.htm";

?>