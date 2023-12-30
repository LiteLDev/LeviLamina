#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BaseGamePackSlices {
public:
    // BaseGamePackSlices inner types declare
    // clang-format off
    struct BaseGameVersionPack;
    // clang-format on

    // BaseGamePackSlices inner types define
    struct BaseGameVersionPack {
    public:
        // prevent constructor by default
        BaseGameVersionPack& operator=(BaseGameVersionPack const&);
        BaseGameVersionPack(BaseGameVersionPack const&);
        BaseGameVersionPack();

    public:
        // NOLINTBEGIN
        // symbol: ??1BaseGameVersionPack@BaseGamePackSlices@@QEAA@XZ
        MCAPI ~BaseGameVersionPack();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BaseGamePackSlices& operator=(BaseGamePackSlices const&);
    BaseGamePackSlices(BaseGamePackSlices const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BaseGamePackSlices@@QEAA@XZ
    MCAPI BaseGamePackSlices();

    // symbol:
    // ?addFromVersions@BaseGamePackSlices@@QEAAXAEBV?$vector@VBaseGameVersion@@V?$allocator@VBaseGameVersion@@@std@@@std@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIResourcePackRepository@@@Bedrock@@@gsl@@AEBVUUID@mce@@@Z
    MCAPI void addFromVersions(
        std::vector<class BaseGameVersion> const&                               baseGameVersions,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository const> const& resourcePackRepository,
        class mce::UUID const&                                                  packId
    );

    // symbol:
    // ?applyPackSlices@BaseGamePackSlices@@QEBAXAEBVBaseGameVersion@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIResourcePackRepository@@@Bedrock@@@gsl@@AEAVResourcePackStack@@@Z
    MCAPI void
    applyPackSlices(class BaseGameVersion const&, Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository const> const&, class ResourcePackStack&)
        const;

    // symbol: ??1BaseGamePackSlices@@QEAA@XZ
    MCAPI ~BaseGamePackSlices();

    // NOLINTEND
};
