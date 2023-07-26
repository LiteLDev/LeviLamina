#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCollisionBoxDescription {

public:
    // prevent constructor by default
    BlockCollisionBoxDescription& operator=(BlockCollisionBoxDescription const&) = delete;
    BlockCollisionBoxDescription(BlockCollisionBoxDescription const&)            = delete;
    BlockCollisionBoxDescription()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockCollisionBoxDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockCollisionBoxDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?initializeComponentFromCode\@BlockCollisionBoxDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponentFromCode(class EntityContext&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?isNetworkComponent\@BlockCollisionBoxDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?buildNetworkTag\@BlockCollisionBoxDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?initializeFromNetwork\@BlockCollisionBoxDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOLLISIONBOXDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockCollisionBoxDescription(); // NOLINT
#endif
    /**
     * @symbol ??0BlockCollisionBoxDescription\@\@QEAA\@AEBVVec3\@\@0\@Z
     */
    MCAPI BlockCollisionBoxDescription(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ??0BlockCollisionBoxDescription\@\@QEAA\@_N\@Z
     */
    MCAPI BlockCollisionBoxDescription(bool); // NOLINT
    /**
     * @symbol ?bindType\@BlockCollisionBoxDescription\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?NameID\@BlockCollisionBoxDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID; // NOLINT
};
