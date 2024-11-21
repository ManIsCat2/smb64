-- Hud --

local TEX_LIVES = get_texture_info("texture_hud_lives")

function on_hud_render_behind()

    -- Hide Hud
    hud_hide()
    if charSelect then
        charSelect.hud_hide_element(HUD_DISPLAY_FLAG_LIVES)
        charSelect.hud_hide_element(HUD_DISPLAY_FLAG_STAR_COUNT)
        charSelect.hud_hide_element(HUD_DISPLAY_FLAG_CAMERA)
    end

    -- New Hud

    djui_hud_set_resolution(RESOLUTION_N64)
    djui_hud_set_font(FONT_HUD)
    djui_hud_set_color(255, 255, 255, 255)

    local screen = {
        w = djui_hud_get_screen_width(),
        h = djui_hud_get_screen_height()
    }

    -- Lives --

    djui_hud_render_texture(TEX_LIVES, 10, 14, 1, 1)
    djui_hud_print_text("@", 24, 14, 1)
    djui_hud_print_text(tostring(hud_get_value(HUD_DISPLAY_LIVES)), 40, 14, 1)

    -- Coins --

    djui_hud_print_text("$", screen.w/2 - 88, 14, 1)
    djui_hud_print_text("@", screen.w/2 - 72, 14, 1)
    djui_hud_print_text(tostring(hud_get_value(HUD_DISPLAY_COINS)), screen.w/2 - 58, 14, 1)

    -- World-Level --

    djui_hud_print_text(string.format("%s-%s", 1, 1), screen.w/2 - 12, 14, 1)

    -- Score --

    djui_hud_print_text(string.format("SCORE %.04d", 0), screen.w - 132, 14, 1)

    -- Death Counter --

    djui_hud_print_text("DEATHS", 10, screen.h - 25, 1)
    djui_hud_print_text(tostring(0), 92, screen.h - 25, 1)

    -- Death Par Counter --

    djui_hud_print_text(string.format("PAR %s", 2), screen.w - 132, screen.h - 25, 1)
end

hook_event(HOOK_ON_HUD_RENDER_BEHIND, on_hud_render_behind)
