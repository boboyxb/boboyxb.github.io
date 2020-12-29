<?php
$z[0]=Array("arclist","\r\n            <li class=\"one\">\r\n                <a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\">\r\n                    <div class=\"overlay\"></div>\r\n                    <img class=\"thumbnail\" src=\"[field:litpic function=firstimg('@me')/]\" alt=\"[field:fulltitle/]\" />\r\n                    <div class=\"title\">\r\n                        <span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span>\r\n                        <h4>[field:title/]</h4>\r\n                    </div>\r\n                </a>\r\n            </li>\r\n            ",200,794);
$z[0][4]=array();
$z[0][4]['orderby']="rand";
$z[0][4]['titlelen']="40";
$z[0][4]['row']="1";
$z[1]=Array("arclist","\r\n            <li class=\"others\">\r\n                <div class=\"image\">\r\n                    <a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\">\r\n                        <img src=\"[field:litpic function=firstimg('@me')/]\" alt=\"[field:fulltitle/]\" class=\"thumbnail\" /></a>\r\n                </div>\r\n                <div class=\"title\">\r\n                    <h4><a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\">[field:title/]</a></h4>\r\n                    <span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span>\r\n                </div>\r\n            </li>\r\n            ",808,1448);
$z[1][4]=array();
$z[1][4]['orderby']="rand";
$z[1][4]['titlelen']="40";
$z[1][4]['row']="3";
$z[2]=Array("arclist","\r\n            <li>\r\n                <a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\">\r\n                    <div class=\"overlay\"></div>\r\n                    <img class=\"thumbnail\" src=\"[field:litpic function=firstimg('@me')/]\" alt=\"[field:fulltitle/]\" />\r\n                    <div class=\"title\">\r\n                        <div class=\"entry-meta\">\r\n                            <span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span>\r\n                        </div>\r\n                        <h4>[field:title/]</h4>\r\n                    </div>\r\n                </a>\r\n            </li>\r\n            ",1626,2295);
$z[2][4]=array();
$z[2][4]['orderby']="click";
$z[2][4]['titlelen']="40";
$z[2][4]['row']="3";
$z[3]=Array("tag","\r\n                <a href=\"[field:link/]\">[field:tag /]</a>\r\n                ",2508,2637);
$z[3][4]=array();
$z[3][4]['row']="30";
$z[3][4]['sort']="hot";
$z[3][4]['getall']="1";
$z[4]=Array("global","",4021,4042);
$z[4][4]=array();
$z[4][4]['name']="cfg_qq";

?>