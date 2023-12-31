#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IInPackagePacks.h"
#include "mc/resources/PackType.h"

class VanillaInPackagePacks : public ::IInPackagePacks {
public:
    // prevent constructor by default
    VanillaInPackagePacks& operator=(VanillaInPackagePacks const&);
    VanillaInPackagePacks(VanillaInPackagePacks const&);
    VanillaInPackagePacks();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VanillaInPackagePacks@@UEAA@XZ
    virtual ~VanillaInPackagePacks() = default;

    // vIndex: 1, symbol:
    // ?getPacks@VanillaInPackagePacks@@UEBA?AV?$vector@UMetaData@IInPackagePacks@@V?$allocator@UMetaData@IInPackagePacks@@@std@@@std@@W4PackType@@@Z
    virtual std::vector<struct IInPackagePacks::MetaData> getPacks(::PackType packType) const;

    // NOLINTEND
};
