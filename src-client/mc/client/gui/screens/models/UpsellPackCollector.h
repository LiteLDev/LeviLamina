#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class IEntitlementManager;
class MainMenuScreenModel;
class PersonaClient;
class SkinPackModel;
class SkinPickerUpsellTreatmentQuery;
struct SkinPackMeta;
namespace mce { class UUID; }
// clang-format on

class UpsellPackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>> mCatalog;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>                                  mMainMenu;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinPickerUpsellTreatmentQuery>>    mSkinPickerUpsellTreatmentQuery;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::brstd::static_vector<::SkinPackMeta, 3>>> mSkinPackMeta;
    ::ll::TypedStorage<4, 4, int>                                                          mNumUpsellPacks;
    ::ll::TypedStorage<1, 1, bool>                                                         mSearchActive;
    // NOLINTEND

public:
    // prevent constructor by default
    UpsellPackCollector& operator=(UpsellPackCollector const&);
    UpsellPackCollector(UpsellPackCollector const&);
    UpsellPackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpsellPackCollector() /*override*/ = default;

    virtual void start(bool) /*override*/;

    virtual bool exhausted() const /*override*/;

    virtual ::HandleRangeResult handleRange(int, int) /*override*/;

    virtual void collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>,
        ::PersonaClient&,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&,
        ::std::unordered_set<::mce::UUID>&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
