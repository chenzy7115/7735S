// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: voices

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Screen1_Panel1;
lv_obj_t * ui_Screen1_TextArea1;
lv_obj_t * ui_Screen1_Button1;
lv_obj_t * ui_Screen1_Label3;
lv_obj_t * ui_Screen1_Button2;
lv_obj_t * ui_Screen1_Label4;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0xF41E09), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Panel1, 120);
    lv_obj_set_height(ui_Screen1_Panel1, 90);
    lv_obj_set_x(ui_Screen1_Panel1, 0);
    lv_obj_set_y(ui_Screen1_Panel1, 5);
    lv_obj_set_align(ui_Screen1_Panel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Screen1_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Panel1, lv_color_hex(0xCACB6F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1_Panel1, lv_color_hex(0xF04B2D), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_TextArea1 = lv_textarea_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_TextArea1, 116);
    lv_obj_set_height(ui_Screen1_TextArea1, 88);
    lv_obj_set_align(ui_Screen1_TextArea1, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_Screen1_TextArea1, "HELLO CHENZY!\nFIRST DAY IS GOOD!");
    lv_textarea_set_placeholder_text(ui_Screen1_TextArea1, "Placeholder...");
    lv_obj_set_style_text_color(ui_Screen1_TextArea1, lv_color_hex(0x030300), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_TextArea1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen1_TextArea1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Button1, 44);
    lv_obj_set_height(ui_Screen1_Button1, 20);
    lv_obj_set_x(ui_Screen1_Button1, 10);
    lv_obj_set_y(ui_Screen1_Button1, -8);
    lv_obj_set_align(ui_Screen1_Button1, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_Screen1_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Button1, lv_color_hex(0x09F43F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen1_Button1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label3 = lv_label_create(ui_Screen1_Button1);
    lv_obj_set_width(ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label3, "OK");
    lv_obj_set_style_text_color(ui_Screen1_Label3, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Button2 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Button2, 44);
    lv_obj_set_height(ui_Screen1_Button2, 20);
    lv_obj_set_x(ui_Screen1_Button2, -10);
    lv_obj_set_y(ui_Screen1_Button2, -8);
    lv_obj_set_align(ui_Screen1_Button2, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Screen1_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Button2, lv_color_hex(0x08F639), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label4 = lv_label_create(ui_Screen1_Button2);
    lv_obj_set_width(ui_Screen1_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label4, "SAVE");
    lv_obj_set_style_text_color(ui_Screen1_Label4, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen1_Label4, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
