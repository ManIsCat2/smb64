-- 2 Directional Controls --

function mario_update(m)
    if m.playerIndex ~= 0 then return end

    star = obj_get_nearest_object_with_behavior_id(m.marioObj, id_bhvStar)

    -- locks the player and disable up and down input

    m.controller.rawStickY = 0
    if star then
        zAlign = star.oPosZ
        m.pos.z = zAlign
    end
    m.vel.z = 0
end

hook_event(HOOK_BEFORE_MARIO_UPDATE, mario_update)
hook_event(HOOK_BEFORE_PHYS_STEP, mario_update)
