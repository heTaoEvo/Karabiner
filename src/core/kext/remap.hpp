#ifndef REMAP_HPP
#define REMAP_HPP

#include "base.hpp"
#include "bridge.hpp"
#include "keycode.hpp"
#include "CallBackWrapper.hpp"

namespace org_pqrs_KeyRemap4MacBook {
  struct RemapParams {
    Params_KeyboardEventCallBack *params;
    unsigned int ex_origKey;
    KeyRemap4MacBook_bridge::GetWorkspaceData::ApplicationType appType;
    KeyRemap4MacBook_bridge::GetWorkspaceData::InputMode inputmode;
    KeyRemap4MacBook_bridge::GetWorkspaceData::InputModeDetail inputmodedetail;
    ExtraRepeatFunc::ExtraRepeatFunc *ex_extraRepeatFunc;
    unsigned int *ex_extraRepeatFlags;
    unsigned int ex_extraRepeatCounter;
  };
  void remap_core(const RemapParams &remapParams);

  // --------------------
  struct RemapConsumerParams {
    Params_KeyboardSpecialEventCallback *params;
    KeyCode::KeyCode *ex_remapKeyCode;
  };
  void remap_consumer(const RemapConsumerParams &remapParams);

  // --------------------
  struct RemapPointingParams_relative {
    Params_RelativePointerEventCallback *params;
    bool *ex_dropEvent;
  };
  void remap_pointing_relative_core(const RemapPointingParams_relative &remapParams);
}

#endif
