#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldTemplateManager;
struct WorldTemplateInfo;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class WorldTemplateListFacet : public ::OreUI::FacetBase<::OreUI::WorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                     mLastUpdate;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>>      mWorldTemplateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~WorldTemplateListFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldTemplateListFacet(
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>      worldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getTemplates() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>      worldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
