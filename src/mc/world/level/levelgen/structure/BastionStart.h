#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class BastionStart : public ::StructureStart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASTIONSTART
public:
    BastionStart& operator=(BastionStart const&) = delete;
    BastionStart(BastionStart const&)            = delete;
    BastionStart()                               = delete;
#endif

public:
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
};
