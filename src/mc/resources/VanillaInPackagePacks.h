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
    // vIndex: 0
    virtual ~VanillaInPackagePacks() = default;

    // vIndex: 1
    virtual std::vector<struct IInPackagePacks::MetaData> getPacks(::PackType packType) const;

    // NOLINTEND
};
