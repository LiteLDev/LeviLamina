#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/editor/selection/SelectionVolumeUpdate.h"
#include "mc/editor/structure/StructureSource.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct EditorStructureDataRemoved; }
namespace Editor { struct EditorStructureDataUpdated; }
namespace Editor { struct EditorStructureEventListUpdated; }
namespace Editor::Services { struct ClientStructureServiceProvider; }
// clang-format on

namespace OreUI {

class EditorStructureFacet : public ::OreUI::FacetBase<::OreUI::EditorStructureFacet> {
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~StructureDescription();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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

    public:
        // prevent constructor by default
        StructureData(StructureData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI StructureData();

        MCAPI ::OreUI::EditorStructureFacet::StructureData&
        operator=(::OreUI::EditorStructureFacet::StructureData const&);

        MCAPI ~StructureData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~StructureUpdatePayload();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    virtual ~EditorStructureFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorStructureFacet(::Editor::ServiceProviderCollection* services);

    MCAPI void _handleSelectionVolumeChange(::Editor::Network::SelectionVolumeUpdate::Action const& evt);

    MCAPI void _handleStructureDataUpdate(::Editor::EditorStructureDataUpdated const& evt);

    MCAPI void _handleStructureEvent(
        ::std::variant<
            ::Editor::EditorStructureDataUpdated,
            ::Editor::EditorStructureDataRemoved,
            ::Editor::EditorStructureEventListUpdated> const& evt
    );

    MCAPI void _handleStructureListUpdate(::Editor::EditorStructureEventListUpdated const&);

    MCAPI void copyToClipboard(::std::string const& structureId);

    MCAPI void createStructureFromClipboard(::std::string const& id, ::std::optional<::std::string> const& fullName);

    MCAPI void createStructureFromSelection(::std::string const& id);

    MCAPI void deleteStructures(::std::vector<::HashedString> const& idList);

    MCAPI void duplicateStructure(::HashedString const& idToDuplicate, ::HashedString const& newId);

    MCAPI ::HashedString generateStructureId();

    MCFOLD ::std::unordered_map<::HashedString, ::OreUI::EditorStructureFacet::StructureData> const&
    getStructureDataMap() const;

    MCFOLD ::std::vector<::OreUI::EditorStructureFacet::StructureDescription> const& getStructureList() const;

    MCFOLD bool hasClipboardItemForStructureCreation() const;

    MCFOLD bool hasSelectionForStructureCreation() const;

    MCAPI void queryStructures(bool shouldFetchList, ::std::vector<::std::string> const& requestdStructureIds);

    MCAPI void updateFromClipboard(::std::string const& structureId) const;

    MCAPI void
    updateStructure(::HashedString const& id, ::OreUI::EditorStructureFacet::StructureUpdatePayload const& payload);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();

    MCAPI static ::std::map<::Editor::StructureSource, ::std::string> const& SOURCE_STRING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection* services);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
