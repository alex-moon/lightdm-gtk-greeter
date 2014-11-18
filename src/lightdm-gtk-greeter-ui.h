/* automatically generated from lightdm-gtk-greeter.glade */
#ifdef __SUNPRO_C
#pragma align 4 (lightdm_gtk_greeter_ui)
#endif
#ifdef __GNUC__
static const char lightdm_gtk_greeter_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char lightdm_gtk_greeter_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.4\"/><object class=\"GtkAccelGroup\" id=\"a11y_accelgr"
  "oup\"/><object class=\"GtkAccelGroup\" id=\"power_accelgroup\"/><object"
  " class=\"GtkWindow\" id=\"panel_window\"><property name=\"name\">panel_"
  "window</property><property name=\"can_focus\">False</property><property"
  " name=\"decorated\">False</property><accel-groups><group name=\"a11y_ac"
  "celgroup\"/><group name=\"power_accelgroup\"/></accel-groups><child><ob"
  "ject class=\"GreeterMenuBar\" id=\"menubar\"><property name=\"name\">me"
  "nubar</property><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">True</property><property name=\"pack_direction\">rtl</p"
  "roperty><signal name=\"key-press-event\" handler=\"menubar_key_press_cb"
  "\" swapped=\"no\"/><child><object class=\"GtkMenuItem\" id=\"power_menu"
  "item\"><property name=\"name\">power_menuitem</property><property name="
  "\"visible\">True</property><property name=\"can_focus\">True</property>"
  "<child type=\"submenu\"><object class=\"GtkMenu\" id=\"power_menu\"><pr"
  "operty name=\"visible\">True</property><property name=\"can_focus\">Fal"
  "se</property><property name=\"accel_group\">power_accelgroup</property>"
  "<child><object class=\"GtkMenuItem\" id=\"suspend_menuitem\"><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"label\" translatable=\"yes\">Suspend</property><"
  "signal name=\"activate\" handler=\"suspend_cb\" swapped=\"no\"/></objec"
  "t></child><child><object class=\"GtkMenuItem\" id=\"hibernate_menuitem\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"label\" translatable=\"yes\">Hibernat"
  "e</property><signal name=\"activate\" handler=\"hibernate_cb\" swapped="
  "\"no\"/></object></child><child><object class=\"GtkMenuItem\" id=\"rest"
  "art_menuitem\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">False</property><property name=\"label\" translatable=\""
  "yes\">Restart...</property><signal name=\"activate\" handler=\"restart_"
  "cb\" swapped=\"no\"/></object></child><child><object class=\"GtkMenuIte"
  "m\" id=\"shutdown_menuitem\"><property name=\"use_action_appearance\">F"
  "alse</property><property name=\"visible\">True</property><property name"
  "=\"can_focus\">False</property><property name=\"accel_path\">&lt;Login&"
  "gt;/power/shutdown</property><property name=\"label\" translatable=\"ye"
  "s\">Shut Down...</property><signal name=\"activate\" handler=\"shutdown"
  "_cb\" swapped=\"no\"/></object></child></object></child></object></chil"
  "d><child><object class=\"GtkMenuItem\" id=\"a11y_menuitem\"><property n"
  "ame=\"name\">a11y_menuitem</property><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">True</property><child type=\"subme"
  "nu\"><object class=\"GtkMenu\" id=\"a11y_menu\"><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">False</property><proper"
  "ty name=\"accel_group\">a11y_accelgroup</property><child><object class="
  "\"GtkCheckMenuItem\" id=\"large_font_menuitem\"><property name=\"use_ac"
  "tion_appearance\">False</property><property name=\"visible\">True</prop"
  "erty><property name=\"can_focus\">False</property><property name=\"acce"
  "l_path\">&lt;Login&gt;/a11y/font</property><property name=\"label\" tra"
  "nslatable=\"yes\">Large Font</property><signal name=\"toggled\" handler"
  "=\"a11y_font_cb\" swapped=\"no\"/></object></child><child><object class"
  "=\"GtkCheckMenuItem\" id=\"high_contrast_menuitem\"><property name=\"us"
  "e_action_appearance\">False</property><property name=\"visible\">True</"
  "property><property name=\"can_focus\">False</property><property name=\""
  "accel_path\">&lt;Login&gt;/a11y/contrast</property><property name=\"lab"
  "el\" translatable=\"yes\">High Contrast</property><signal name=\"toggle"
  "d\" handler=\"a11y_contrast_cb\" swapped=\"no\"/></object></child><chil"
  "d><object class=\"GtkCheckMenuItem\" id=\"keyboard_menuitem\"><property"
  " name=\"use_action_appearance\">False</property><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">False</property><proper"
  "ty name=\"accel_path\">&lt;Login&gt;/a11y/keyboard</property><property "
  "name=\"label\" translatable=\"yes\">On Screen Keyboard</property><prope"
  "rty name=\"use_underline\">True</property><signal name=\"toggled\" hand"
  "ler=\"a11y_keyboard_cb\" swapped=\"no\"/></object></child><child><objec"
  "t class=\"GtkCheckMenuItem\" id=\"reader_menuitem\"><property name=\"us"
  "e_action_appearance\">False</property><property name=\"visible\">True</"
  "property><property name=\"can_focus\">False</property><property name=\""
  "accel_path\">&lt;Login&gt;/a11y/reader</property><property name=\"label"
  "\" translatable=\"yes\">Screen Reader</property><property name=\"use_un"
  "derline\">True</property><signal name=\"toggled\" handler=\"a11y_reader"
  "_cb\" swapped=\"no\"/></object></child></object></child></object></chil"
  "d><child><object class=\"GtkMenuItem\" id=\"language_menuitem\"><proper"
  "ty name=\"name\">language_menuitem</property><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"label\">[language_code]</property><child type=\"submenu\"><object"
  " class=\"GtkMenu\" id=\"language_menu\"><property name=\"visible\">True"
  "</property><property name=\"can_focus\">False</property></object></chil"
  "d></object></child><child><object class=\"GtkMenuItem\" id=\"session_me"
  "nuitem\"><property name=\"name\">session_menuitem</property><property n"
  "ame=\"visible\">True</property><property name=\"can_focus\">True</prope"
  "rty><child type=\"submenu\"><object class=\"GtkMenu\" id=\"session_menu"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">False</property></object></child></object></child><child><object cla"
  "ss=\"GtkMenuItem\" id=\"layout_menuitem\"><property name=\"name\">layou"
  "t_menuitem</property><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">True</property><property name=\"label\">[layout]</"
  "property><child type=\"submenu\"><object class=\"GtkMenu\" id=\"layout_"
  "menu\"><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">False</property></object></child></object></child><child><object"
  " class=\"GtkSeparatorMenuItem\" id=\"clock_menuitem\"><property name=\""
  "name\">clock_menuitem</property><property name=\"can_focus\">False</pro"
  "perty></object></child><child><object class=\"GtkSeparatorMenuItem\" id"
  "=\"host_menuitem\"><property name=\"name\">host_menuitem</property><pro"
  "perty name=\"can_focus\">False</property></object></child></object></ch"
  "ild><style><class name=\"lightdm-gtk-greeter\"/><class name=\"menubar\""
  "/></style></object><object class=\"GtkListStore\" id=\"user_liststore\""
  "><columns><column type=\"gchararray\"/><column type=\"gchararray\"/><co"
  "lumn type=\"gint\"/></columns></object><object class=\"GtkWindow\" id=\""
  "login_window\"><property name=\"name\">login_window</property><property"
  " name=\"can_focus\">False</property><property name=\"resizable\">False<"
  "/property><property name=\"decorated\">False</property><accel-groups><g"
  "roup name=\"a11y_accelgroup\"/><group name=\"power_accelgroup\"/></acce"
  "l-groups><signal name=\"key-press-event\" handler=\"login_window_key_pr"
  "ess_cb\" swapped=\"no\"/><child><object class=\"GtkBox\" id=\"box1\"><p"
  "roperty name=\"visible\">True</property><property name=\"can_focus\">Fa"
  "lse</property><property name=\"orientation\">vertical</property><child>"
  "<object class=\"GtkFrame\" id=\"content_frame\"><property name=\"name\""
  ">content_frame</property><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">False</property><property name=\"label_xalign\""
  ">0</property><property name=\"shadow_type\">none</property><child><obje"
  "ct class=\"GtkGrid\" id=\"grid1\"><property name=\"visible\">True</prop"
  "erty><property name=\"can_focus\">False</property><property name=\"marg"
  "in_left\">24</property><property name=\"margin_right\">24</property><pr"
  "operty name=\"margin_top\">24</property><property name=\"row_spacing\">"
  "6</property><property name=\"column_spacing\">18</property><child><obje"
  "ct class=\"GtkFrame\" id=\"user_image_border\"><property name=\"name\">"
  "user_image_border</property><property name=\"visible\">True</property><"
  "property name=\"can_focus\">False</property><property name=\"halign\">c"
  "enter</property><property name=\"valign\">center</property><property na"
  "me=\"label_xalign\">0</property><property name=\"shadow_type\">none</pr"
  "operty><child><object class=\"GtkImage\" id=\"user_image\"><property na"
  "me=\"name\">user_image</property><property name=\"visible\">True</prope"
  "rty><property name=\"can_focus\">False</property><property name=\"pixel"
  "_size\">80</property><property name=\"icon_name\">avatar-default</prope"
  "rty></object></child></object><packing><property name=\"left_attach\">0"
  "</property><property name=\"top_attach\">0</property><property name=\"w"
  "idth\">1</property><property name=\"height\">3</property></packing></ch"
  "ild><child><object class=\"GtkComboBox\" id=\"user_combobox\"><property"
  " name=\"name\">user_combobox</property><property name=\"width_request\""
  ">200</property><property name=\"can_focus\">False</property><property n"
  "ame=\"valign\">center</property><property name=\"margin_top\">12</prope"
  "rty><property name=\"hexpand\">True</property><property name=\"model\">"
  "user_liststore</property><signal name=\"changed\" handler=\"user_combob"
  "ox_active_changed_cb\" swapped=\"no\"/><signal name=\"key-press-event\""
  " handler=\"user_combo_key_press_cb\" swapped=\"no\"/><child><object cla"
  "ss=\"GtkCellRendererText\" id=\"cellrenderertext1\"/><attributes><attri"
  "bute name=\"text\">1</attribute><attribute name=\"weight\">2</attribute"
  "></attributes></child></object><packing><property name=\"left_attach\">"
  "1</property><property name=\"top_attach\">0</property><property name=\""
  "width\">1</property><property name=\"height\">1</property></packing></c"
  "hild><child><object class=\"GtkEntry\" id=\"username_entry\"><property "
  "name=\"name\">prompt_entry</property><property name=\"can_focus\">True<"
  "/property><property name=\"no_show_all\">True</property><property name="
  "\"hexpand\">True</property><property name=\"invisible_char\">\342\200\242"
  "</property><property name=\"placeholder_text\" translatable=\"yes\">Ent"
  "er your username</property><signal name=\"focus-out-event\" handler=\"u"
  "sername_focus_out_cb\" swapped=\"no\"/><signal name=\"key-press-event\""
  " handler=\"username_key_press_cb\" swapped=\"no\"/></object><packing><p"
  "roperty name=\"left_attach\">1</property><property name=\"top_attach\">"
  "1</property><property name=\"width\">1</property><property name=\"heigh"
  "t\">1</property></packing></child><child><object class=\"GtkEntry\" id="
  "\"password_entry\"><property name=\"name\">prompt_entry</property><prop"
  "erty name=\"width_request\">200</property><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">True</property><property name"
  "=\"margin_bottom\">12</property><property name=\"hexpand\">True</proper"
  "ty><property name=\"visibility\">False</property><property name=\"invis"
  "ible_char\">\342\200\242</property><property name=\"primary_icon_activa"
  "table\">False</property><property name=\"secondary_icon_activatable\">F"
  "alse</property><property name=\"placeholder_text\" translatable=\"yes\""
  ">Enter your password</property><signal name=\"activate\" handler=\"logi"
  "n_cb\" swapped=\"no\"/><signal name=\"key-press-event\" handler=\"passw"
  "ord_key_press_cb\" swapped=\"no\"/></object><packing><property name=\"l"
  "eft_attach\">1</property><property name=\"top_attach\">2</property><pro"
  "perty name=\"width\">1</property><property name=\"height\">1</property>"
  "</packing></child></object></child><child type=\"label_item\"><placehol"
  "der/></child></object><packing><property name=\"expand\">True</property"
  "><property name=\"fill\">True</property><property name=\"position\">0</"
  "property></packing></child><child><object class=\"GtkInfoBar\" id=\"gre"
  "eter_infobar\"><property name=\"name\">greeter_infobar</property><prope"
  "rty name=\"app_paintable\">True</property><property name=\"can_focus\">"
  "False</property><child internal-child=\"action_area\"><object class=\"G"
  "tkButtonBox\" id=\"infobar-action_area1\"><property name=\"can_focus\">"
  "False</property><property name=\"layout_style\">end</property><child><p"
  "laceholder/></child></object><packing><property name=\"expand\">False</"
  "property><property name=\"fill\">False</property><property name=\"posit"
  "ion\">0</property></packing></child><child internal-child=\"content_are"
  "a\"><object class=\"GtkBox\" id=\"infobar-content_area1\"><property nam"
  "e=\"can_focus\">False</property><child><object class=\"GtkLabel\" id=\""
  "message_label\"><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">False</property><property name=\"label\" comments=\"Thi"
  "s is a placeholder string and will be replaced with a message from PAM\""
  ">[message]</property></object><packing><property name=\"expand\">True</"
  "property><property name=\"fill\">True</property><property name=\"positi"
  "on\">0</property></packing></child></object><packing><property name=\"e"
  "xpand\">False</property><property name=\"fill\">False</property><proper"
  "ty name=\"position\">0</property></packing></child></object><packing><p"
  "roperty name=\"expand\">False</property><property name=\"fill\">True</p"
  "roperty><property name=\"position\">1</property></packing></child><chil"
  "d><object class=\"GtkFrame\" id=\"buttonbox_frame\"><property name=\"na"
  "me\">buttonbox_frame</property><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">False</property><property name=\"label_x"
  "align\">0</property><property name=\"shadow_type\">none</property><chil"
  "d><object class=\"GtkBox\" id=\"box2\"><property name=\"visible\">True<"
  "/property><property name=\"can_focus\">False</property><property name=\""
  "margin_left\">24</property><property name=\"margin_right\">24</property"
  "><property name=\"margin_bottom\">24</property><child><object class=\"G"
  "tkButton\" id=\"cancel_button\"><property name=\"label\" translatable=\""
  "yes\">Cancel</property><property name=\"name\">cancel_button</property>"
  "<property name=\"visible\">True</property><property name=\"can_focus\">"
  "True</property><property name=\"receives_default\">True</property><sign"
  "al name=\"clicked\" handler=\"cancel_cb\" swapped=\"no\"/></object><pac"
  "king><property name=\"expand\">False</property><property name=\"fill\">"
  "True</property><property name=\"position\">0</property></packing></chil"
  "d><child><object class=\"GtkButton\" id=\"login_button\"><property name"
  "=\"label\" translatable=\"yes\">Log In</property><property name=\"name\""
  ">login_button</property><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">True</property><property name=\"receives_defaul"
  "t\">True</property><signal name=\"clicked\" handler=\"login_cb\" swappe"
  "d=\"no\"/></object><packing><property name=\"expand\">False</property><"
  "property name=\"fill\">True</property><property name=\"pack_type\">end<"
  "/property><property name=\"position\">1</property></packing></child></o"
  "bject></child><child type=\"label_item\"><placeholder/></child></object"
  "><packing><property name=\"expand\">False</property><property name=\"fi"
  "ll\">True</property><property name=\"position\">2</property></packing><"
  "/child></object></child><style><class name=\"lightdm-gtk-greeter\"/></s"
  "tyle></object></interface>"
};

static const unsigned lightdm_gtk_greeter_ui_length = 14311u;
