-- 2D camera

function update()
    camera_config_enable_free_cam(false)
    camera_config_invert_x(false)
end

hook_event(HOOK_UPDATE, update)
