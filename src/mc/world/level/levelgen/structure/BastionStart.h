#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class BastionStart : public ::StructureStart {

public:
    // prevent constructor by default
    BastionStart& operator=(BastionStart const&) = delete;
    BastionStart(BastionStart const&)            = delete;
    BastionStart()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?isValid\@BastionStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    // NOLINTEND
};
