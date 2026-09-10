#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class GameVersion;
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

struct GameVersionObject : public ::OreUI::PropertyObject<::OreUI::GameVersionObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>  mMajor;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>  mMinor;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>  mPatch;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>  mRevision;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>> mIsBeta;
    // NOLINTEND

public:
    // prevent constructor by default
    GameVersionObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameVersionObject(::std::string name, ::OreUI::Detail::IPropertyObject* parent);

    MCAPI void set(::GameVersion const& version);

    MCAPI void set(::BaseGameVersion const& version);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name, ::OreUI::Detail::IPropertyObject* parent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
