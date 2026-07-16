#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class ClientStructureServiceProvider; }
// clang-format on

namespace OreUI {

class EditorStructureFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorStructureFacet> {
public:
    // EditorStructureFacet inner types declare
    // clang-format off
    struct StructureDescription;
    struct StructureData;
    struct StructureUpdatePayload;
    // clang-format on

    // EditorStructureFacet inner types define
    struct StructureDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                mId;
        ::ll::TypedStorage<8, 32, ::std::string>                mName;
        ::ll::TypedStorage<8, 32, ::std::string>                mSource;
        ::ll::TypedStorage<1, 1, bool>                          mIsReadOnly;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mTags;
        // NOLINTEND
    };

    struct StructureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                                   mOrigin;
        ::ll::TypedStorage<4, 12, ::Vec3>                                   mSize;
        ::ll::TypedStorage<8, 32, ::std::string>                            mFileName;
        ::ll::TypedStorage<8, 32, ::std::string>                            mFullName;
        ::ll::TypedStorage<8, 32, ::std::string>                            mNamespace;
        ::ll::TypedStorage<1, 1, bool>                                      mIncludeInExports;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mContents;
        // NOLINTEND
    };

    struct StructureUpdatePayload {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                       mOrigin;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mDisplayName;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mFileName;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mNamespace;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>                          mIncludeInExports;
        ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mTags;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mIsDirty;
    ::ll::TypedStorage<8, 8, ::Editor::Services::ClientStructureServiceProvider*> mStructureService;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>     mClipboardSelectionServiceListeners;
    ::ll::TypedStorage<1, 1, bool>                                                mHasClipboardItemForStructureCreation;
    ::ll::TypedStorage<1, 1, bool>                                                mHasSelectionForStructureCreation;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::EditorStructureFacet::StructureDescription>> mStructureDescList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::OreUI::EditorStructureFacet::StructureData>>
                                                               mStructureDataMap;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStructureEventSub;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorStructureFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorStructureFacet(::Editor::ServiceProviderCollection* services);
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

    // NOLINTEND
};

} // namespace OreUI
