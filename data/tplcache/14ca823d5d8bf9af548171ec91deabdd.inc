<li>
                <a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>
                <div class="Nodes">
                    <ul>
                        {dede:channel type='son' noself='yes'}
                        <li><a href="[field:typelink/]" target="_blank">[field:typename/]</a></li>
                        {/dede:channel}
                    </ul>
                </div>
            </li>