/**
 * @file  VanillaInPackagePacks.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaInPackagePacks.
 *
 */
class VanillaInPackagePacks {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAINPACKAGEPACKS
public:
    class VanillaInPackagePacks& operator=(class VanillaInPackagePacks const &) = delete;
    VanillaInPackagePacks(class VanillaInPackagePacks const &) = delete;
    VanillaInPackagePacks() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VanillaInPackagePacks();
    /**
     * @vftbl  1
     * @symbol  ?getPacks\@VanillaInPackagePacks\@\@UEBA?AV?$vector\@UMetaData\@IInPackagePacks\@\@V?$allocator\@UMetaData\@IInPackagePacks\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<struct IInPackagePacks::MetaData> getPacks(enum class PackType) const;

};