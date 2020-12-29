<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!doctype html>
<html>
<head>
<meta charset="utf-8">
<title><?php echo $fields['title']; ?>-<?php echo $GLOBALS['cfg_webname']; ?></title>
<meta name="keywords" content="<?php echo $fields['keywords']; ?>"/>
<meta name="description" content="<?php echo html2text($fields['description']); ?>"/>
<link rel="stylesheet" type="text/css" href="/skin/css/index.css">
<script src="/skin/js/jquery-1.11.3.min.js"></script>
<script src="/skin/js/Other.js"></script>
</head>
<body>
    <?php include $this->CompilerInclude("head.htm");
 ?><!-- //header -->
    <div class="yj topic">
        <div class="yj1200">
            <h1><p><?php echo $fields['typename']; ?></p></h1>
            <span class="place"><?php echo $fields['position']; ?></span>
        </div>
    </div>
    <div class="yj page-nav">
        <div class="yj1200">
            <ul>
                <?php
$atts = array();
$atts['tagname'] = 'channel';
$atts['row'] = '6';
$atts['type'] = 'sun';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                <li><a href="[field:typelink/]" target="_blank">[field:typename/]</a></li>
                <?php
}
}
?>
            </ul>
        </div>
    </div>
    <div class="yj page-box1">
        <div class="yj1200">
            <div class="GCD_contact_txt">
                <ul>
                    <li>
                        <span>
                            <img src="http://www.yujiannainiu.com/statics/contact/images/contact_biao1.jpg" alt="遇见奶牛加盟地址">
                        </span>
                        <p>地址：杭州市余杭区姚家路5号蓝都科创园6栋</p>
                    </li>
                    <li>
                        <span>
                            <img src="http://www.yujiannainiu.com/statics/contact/images/contact_biao2.jpg" alt="遇见奶牛加盟">
                        </span>
                        <p>邮编：310000</p>
                    </li>
                    <li class="movexian">
                        <span>
                            <img src="http://www.yujiannainiu.com/statics/contact/images/contact_biao3.jpg" alt="遇见奶牛加盟电话">
                        </span>
                        <p>Tel：400-6728890</p>
                    </li>
                </ul>
            </div>
            <div class="GCD_contact_pic">
                <span><img src="http://www.yujiannainiu.com/statics/contact/images/contact_pic.jpg" alt="奶茶加盟"></span>
                <p style="height: 64px; padding:10px 20px ;">遇见奶牛隶属博多集团旗下杭州奇异鸟饮品科技连锁有限公司,以项目投资管理、原物料生产、设备供应、餐饮茶饮品牌运营及加盟连锁型知名企业,在奶茶品牌运营与管理有着丰富的经验</p>
            </div>
        </div>
        <div class="yj1200">
            <div class="GCD_feedback">
                <div class="GCD_feedback_left">
                    <a href="#"><img src="http://www.yujiannainiu.com/statics/contact/images/feedback.jpg"></a>
                </div>
                <div class="GCD_feedback_right">
                    <div class="GCD_feedback_right_tit">给我们留言</div>
                    <div class="GCD_feedback_txt">
                        <iframe style="width:0; height:0; border:none;" name="myFrame" src="about:blank"></iframe>
                        <form action="/plus/diy.php" enctype="multipart/form-data" method="post" target="myFrame" onsubmit="return Checkfeedback1();" id="form1" name="form1">
                            <input type="hidden" name="action" value="post" />
                            <input type="hidden" name="diyid" value="1" />
                            <input type="hidden" name="do" value="2" />
                            <script type="text/javascript">url = window.location.href;
                                document.getElementById("url").value = url;</script>
                            <div>您的名字（必填）</div>
                            <div>您的电话（必填）</div>
                            <input type="text" name="lxmz" id="names" class="finput1" value="*请填写您的姓名" onblur="if (value ==''){value='*请填写您的姓名'}" onfocus="if (value =='*请填写您的姓名'){value =''}">
                            <input type="text" name="lxdh" id="tels" class="finput1" value="*请填写您的联系电话" onblur="if (value ==''){value='*请填写您的联系电话'}" onfocus="if (value =='*请填写您的联系电话'){value =''}">
                            <div>您的QQ或微信</div>
                            <input type="text" name="lxqq" id="email" class="finput2">
                            <div>您的留言</div>
                            <textarea id="contents" name="lxly" class="finput3" onblur="if (value ==''){value='* 请在此输入留言内容，我们会尽快与您联系!'}" onfocus="if (value =='* 请在此输入留言内容，我们会尽快与您联系!'){value =''}">* 请在此输入留言内容，我们会尽快与您联系!</textarea>
                            <input type="hidden" name="dede_fields" value="lxmz,text;lxdh,text;lxqq,text;lxly,multitext" />
                            <input type="hidden" name="dede_fieldshash" value="fae9d86acb790001d6d866cb3c2ceada" />
                            <input type="submit" name="submit" value="提 交" class='coolbg feedbackbtn2' />
                            <input type="reset" name="reset" value="重 置" class='coolbg feedbackbtn2' />
                            <span class='tips feedbackbtn2'>*提交一次即可</span>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div><!-- //底部模板 -->
    <?php include $this->CompilerInclude("foot.htm");
 ?><!-- /footer -->
</body>
</html>