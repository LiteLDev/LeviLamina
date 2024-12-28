#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/NetworkFilter.h"

// auto generated forward declare list
// clang-format off
class DlcId;
struct WorldTemplateInfo;
namespace mce { class UUID; }
// clang-format on

class IMainMenuScreenModel {
public:
    // prevent constructor by default
    IMainMenuScreenModel& operator=(IMainMenuScreenModel const&);
    IMainMenuScreenModel(IMainMenuScreenModel const&);
    IMainMenuScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMainMenuScreenModel();

    // vIndex: 1
    virtual void
    navigateToDlcProgressScreen(::std::vector<::DlcId> const&, ::std::function<void(bool, bool)>, bool, bool, bool) = 0;

    // vIndex: 2
    virtual bool isNetworkEnabled(::NetworkFilter) const = 0;

    // vIndex: 3
    virtual bool doesPlatformSupportRealms() const = 0;

    // vIndex: 4
    virtual bool isPackIdInRealmsPlus(::std::string const&) const = 0;

    // vIndex: 5
    virtual void repopulateWorldTemplates() = 0;

    // vIndex: 6
    virtual ::WorldTemplateInfo const* findWorldTemplateByUUID(::std::vector<::mce::UUID> const&) const = 0;

    // vIndex: 7
    virtual ::WorldTemplateInfo* findWorldTemplateByPackUUIDNonConst(::std::vector<::mce::UUID> const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
