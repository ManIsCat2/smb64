function exclamation_box_size(o)
    cur_obj_scale(2.5)
end

hook_behavior(id_bhvExclamationBox, OBJ_LIST_SURFACE, false, nil, exclamation_box_size)