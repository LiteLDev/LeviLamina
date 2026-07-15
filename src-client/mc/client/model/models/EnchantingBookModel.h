#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ScreenContext;
// clang-format on

class EnchantingBookModel : public ::Model {
public:
    // EnchantingBookModel inner types define
    enum class Part : int {
        LeftLid    = 0,
        RightLid   = 1,
        LeftPages  = 2,
        RightPages = 3,
        FlipPage1  = 4,
        FlipPage2  = 5,
        Seam       = 6,
        NumParts   = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                mIsOnLectern;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 4032, ::ModelPart[7]>   mBook;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingBookModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(
        ::ScreenContext& screenContext,
        ::Actor&         e,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    ) /*override*/;

    virtual void setupAnim(float time, float r, float bob, float yRot, float xRot, float scale) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EnchantingBookModel(bool isOnLectern);

    MCAPI void
    render(::ScreenContext& screenContext, float time, float r, float bob, float yRot, float xRot, float scale);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isOnLectern);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(
        ::ScreenContext& screenContext,
        ::Actor&         e,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    );

    MCAPI void $setupAnim(float time, float r, float bob, float yRot, float xRot, float scale);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
