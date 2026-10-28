#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
class PersonaClient;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class IsPaperDollSkinReadyQuery : public ::OreUI::QueryBase<::OreUI::IsPaperDollSkinReadyQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PersonaClient const&>          mPersonaClient;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSkinName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mIsReady;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mAreAnimationsReady;
    // NOLINTEND

public:
    // prevent constructor by default
    IsPaperDollSkinReadyQuery& operator=(IsPaperDollSkinReadyQuery const&);
    IsPaperDollSkinReadyQuery(IsPaperDollSkinReadyQuery const&);
    IsPaperDollSkinReadyQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IsPaperDollSkinReadyQuery(::OreUI::ClientDependencies const& client, ::std::optional<::std::string> skinName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::std::optional<::std::string> skinName);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};

} // namespace OreUI
