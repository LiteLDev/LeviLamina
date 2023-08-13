#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class IVillageManager : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IVillageManager& operator=(IVillageManager const&) = delete;
    IVillageManager(IVillageManager const&)            = delete;
    IVillageManager()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fetchClosestVillage\@VillageManager\@\@UEBA?AV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVBlockPos\@\@HI\@Z
     */
    virtual std::weak_ptr<class Village> fetchClosestVillage(class BlockPos const&, int, unsigned int) const = 0;
    /**
     * @vftbl 2
     * @symbol ?getVillageByID\@VillageManager\@\@UEBA?AV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    virtual std::weak_ptr<class Village> getVillageByID(class mce::UUID const&) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IVILLAGEMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IVillageManager();
#endif
    // NOLINTEND
};
