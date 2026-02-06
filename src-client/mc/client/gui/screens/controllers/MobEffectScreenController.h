#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
struct MobEffectPane;
// clang-format on

class MobEffectScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                             mRenderableEffectsCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectPane>> mCurrentEffects;
    ::ll::TypedStorage<1, 1, bool>                            mUpdateBindsNextFrame;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEffectScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MobEffectScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
