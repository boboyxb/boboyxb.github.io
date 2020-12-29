<div class="ajax-load-con content excerpt-one">
                            <div class="content-box posts-image-box">
                                <div class="posts-default-title">
                                    <div class="post-entry-categories">
                                        [field:id function=GetMyTags(@me,5)/]
                                    </div>
                                    <h2>
                                        <a href="[field:arcurl /]" title="[field:fulltitle /]">[field:title /]</a>
                                    </h2>
                                </div>
                                <p class="focus">
                                    <a href="[field:arcurl /]" class="thumbnail">
                                        <span class="item">
                                            [field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? "" : "<span class="thumb-span"><img src="{@me['litpic']}" class="thumb"></span>"); [/field:array]

                                            <!-- [field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? "" : "<i><a href='{@me['arcurl']}'><img src='{@me['litpic']}' alt='{@me['title']}'></a></i>"); [/field:array] -->

                                        </span>
                                    </a>
                                </p>
                                <div class="posts-default-content">
                                    <div class="posts-text">[field:description function="cn_substr(@me,300)"/]...</div>
                                    <div class="posts-default-info">
                                        <ul>
                                            <li class="post-author">
                                                <div class="avatar"><img src="/skin/img/admin.png" /></div>
                                                <a>[field:writer /]</a>
                                            </li>
                                            <li class="ico-cat">
                                                <i class="icon-list-2"></i>
                                                <a href="/6679/lian_fengdingbin_/">[field:typename /]</a>
                                            </li>
                                            <li class="ico-time"><i class="icon-clock-1"></i>[field:pubdate function="MyDate('Y-m-d',@me)"/]</li>
                                            <li class="ico-like"><i class="icon-heart"></i>[field:click /]</li>
                                        </ul>
                                    </div>
                                </div>
                            </div>
                        </div>