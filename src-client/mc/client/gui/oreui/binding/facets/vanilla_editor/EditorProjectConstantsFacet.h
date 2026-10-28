#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct BlockColorSnapshot; }
// clang-format on

namespace OreUI {

class EditorProjectConstantsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorProjectConstantsFacet> {
public:
    // EditorProjectConstantsFacet inner types declare
    // clang-format off
    struct BlockInfo;
    struct EntityInfo;
    // clang-format on

    // EditorProjectConstantsFacet inner types define
    struct BlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mLabel;
        ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>  mAverageColor;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[16]> NAME();
        // NOLINTEND
    };

    struct EntityInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mLabel;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[17]> NAME();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Editor::ServiceProviderCollection*>                   mServices;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Editor::BlockColorSnapshot const>> mPublishedColors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mSnapshotChangedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mLevelInitializedSub;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                          mBlockNameList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::OreUI::EditorProjectConstantsFacet::BlockInfo>>
                                                            mBlockInfoMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mEntityIdList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::OreUI::EditorProjectConstantsFacet::EntityInfo>>
        mEntityInfoMap;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorProjectConstantsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorProjectConstantsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorProjectConstantsFacet(::Editor::ServiceProviderCollection* services);

    MCAPI void _setBlockColors(::std::shared_ptr<::Editor::BlockColorSnapshot const> snapshot);

    MCAPI void _subscribeToBlockColors(::Editor::ServiceProviderCollection& managerServices);

    MCFOLD ::std::unordered_map<::std::string, ::OreUI::EditorProjectConstantsFacet::BlockInfo> const&
    getBlockInfoMap() const;

    MCFOLD ::std::vector<::std::string> const& getBlocknameList() const;

    MCFOLD ::std::vector<::std::string> const& getEntityIdList() const;

    MCFOLD ::std::unordered_map<::std::string, ::OreUI::EditorProjectConstantsFacet::EntityInfo> const&
    getEntityInfoMap() const;

    MCAPI bool const isBlockAtlasAvailable() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection* services);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
