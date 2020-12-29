<li>
                    <span>[field:pubdate function='strftime("%y-%m",@me)'/]<br><strong>[field:pubdate function='strftime("%d",@me)'/]</strong></span>
                    <div>
                        <a href="view.php?aid=[field:id/]"><h4>[field:title/]</h4></a>
                        <p>[field:description function="cn_substr(@me,300)"/]...</p>
                    </div>
                </li>