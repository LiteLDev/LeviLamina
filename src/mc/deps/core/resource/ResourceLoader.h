#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

class ResourceLoader {

public:
    // prevent constructor by default
    ResourceLoader& operator=(ResourceLoader const&) = delete;
    ResourceLoader(ResourceLoader const&)            = delete;
    ResourceLoader()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?load\@ResourceLoader\@\@UEBA_NAEBVResourceLocationPair\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual bool load(class ResourceLocationPair const&, std::string&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5() = 0; // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6() = 0; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?getPath\@ResourceLoader\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getPath\@ResourceLoader\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string>
    getPath(class ResourceLocation const&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?getPathContainingResource\@ResourceLoader\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string>
    getPathContainingResource(class ResourceLocation const&) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?getPathContainingResource\@ResourceLoader\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string>
    getPathContainingResource(class ResourceLocation const&, std::vector<std::string>) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?getPackStackIndexOfResource\@ResourceLoader\@\@UEBA?AU?$pair\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    virtual struct std::pair<int, std::string const&>
    getPackStackIndexOfResource(class ResourceLocation const&, std::vector<std::string> const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCELOADER
    /**
     * @symbol ?isInStreamableLocation\@ResourceLoader\@\@UEBA_NAEBVResourceLocation\@\@\@Z
     */
    MCVAPI bool isInStreamableLocation(class ResourceLocation const&) const; // NOLINT
    /**
     * @symbol
     * ?isInStreamableLocation\@ResourceLoader\@\@UEBA_NAEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI bool isInStreamableLocation(class ResourceLocation const&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourceLoader(); // NOLINT
#endif
};
