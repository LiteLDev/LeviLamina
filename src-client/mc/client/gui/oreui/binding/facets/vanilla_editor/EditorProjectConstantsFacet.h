#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace OreUI {

class EditorProjectConstantsFacet : public ::OreUI::FacetBase<::OreUI::EditorProjectConstantsFacet> {
public:
    // EditorProjectConstantsFacet inner types declare
    // clang-format off
    struct AtlasInfo;
    struct BlockInfo;
    struct EntityInfo;
    // clang-format on

    // EditorProjectConstantsFacet inner types define
    struct AtlasInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64 const> mThumbnailWidth;
        ::ll::TypedStorage<8, 8, uint64 const> mThumbnailHeight;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
        // NOLINTEND
    };

    struct BlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mLabel;
        ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>  mAverageColor;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BlockInfo();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct EntityInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mLabel;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~EntityInfo();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::OreUI::EditorProjectConstantsFacet::AtlasInfo const> mAtlasInfo;
    ::ll::TypedStorage<8, 8, ::Editor::ServiceProviderCollection*>                   mServices;
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

    MCFOLD ::std::unordered_map<::std::string, ::OreUI::EditorProjectConstantsFacet::BlockInfo> const&
    getBlockInfoMap() const;

    MCFOLD ::std::vector<::std::string> const& getBlocknameList() const;

    MCFOLD ::std::vector<::std::string> const& getEntityIdList() const;

    MCFOLD ::std::unordered_map<::std::string, ::OreUI::EditorProjectConstantsFacet::EntityInfo> const&
    getEntityInfoMap() const;

    MCFOLD bool const isBlockAtlasAvailable() const;
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
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
