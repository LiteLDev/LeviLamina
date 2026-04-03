#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/realms/UploadToRealmsError.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsList; }
namespace Realms { class RealmsUploader; }
// clang-format on

namespace OreUI {

class RealmWorldUploaderFacet_v2 : public ::OreUI::FacetBase<::OreUI::RealmWorldUploaderFacet_v2> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::Realms::UploadToRealmsError>> mUploadRealmWorldTask;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsUploader>>              mRealmsUploader;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsList>>                  mRealmsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mRealmsListSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldUploaderFacet_v2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~RealmWorldUploaderFacet_v2() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmWorldUploaderFacet_v2(
        ::std::shared_ptr<::Realms::RealmsUploader> realmsUploader,
        ::std::shared_ptr<::Realms::RealmsList>     realmsList
    );

    MCAPI void clearUploadWorldToRealmTaskState();

    MCFOLD ::std::optional<::Realms::UploadToRealmsError> const& getUploadWorldToRealmError() const;

    MCFOLD ::OreUI::FacetTaskState getUploadWorldToRealmTaskState() const;

    MCAPI void uploadWorldToRealm(::std::string const& realmID, ::std::string const& worldID);
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
        ::std::shared_ptr<::Realms::RealmsUploader> realmsUploader,
        ::std::shared_ptr<::Realms::RealmsList>     realmsList
    );
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
