#include "script_component.hpp"
/*
 * Author: Deltagamer, JoramD
 * Set textues and locks turret based on animation state.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: State <NUMBER>
 *
 * Example:
 * _this call tacs_arcadian_fnc_toggleGun
 *
 * Public: No
 */

params ["_paramZero", "_paramOne"];

if (_paramOne == 0) then {
    _paramZero lockTurret [[0], false];
    _paramZero setObjectTextureGlobal [0, QPATHTOF(data\arcadian_body_armed_black_co.paa)];
    _paramZero setObjectTextureGlobal [1, QPATHTOF(data\arcadian_interier_armed_co.paa)];
    _paramZero setObjectMaterialGlobal [0, QPATHTOF(data\suv_armouredbody.rvmat)];
    _paramZero setObjectMaterialGlobal [1, QPATHTOF(data\suv_interier.rvmat)];
} else {
    _paramZero lockTurret [[0], true];
    _paramZero setObjectTextureGlobal [0, QPATHTOF(data\arcadian_body_black_co.paa)];
    _paramZero setObjectTextureGlobal [1, QPATHTOF(data\arcadian_interier_co.paa)];
    _paramZero setObjectMaterialGlobal [0, QPATHTOF(data\suv_body.rvmat)];
    _paramZero setObjectMaterialGlobal [1, QPATHTOF(data\suv_interier.rvmat)];
};
