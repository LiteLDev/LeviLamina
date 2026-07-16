#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class GeometryPtr;
class ModelPart;
class ScreenContext;
// clang-format on

class SerializedActorModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart>> mParts;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>         mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>         mGuiMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::ScreenContext&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedActorModel();

    MCAPI void load(::GeometryPtr geo, ::gsl::span<::std::string_view const> modelNodeOrder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
