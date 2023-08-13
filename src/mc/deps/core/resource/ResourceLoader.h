#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class ResourceLoader : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    ResourceLoader& operator=(ResourceLoader const&) = delete;
    ResourceLoader(ResourceLoader const&)            = delete;
    ResourceLoader()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?load\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool load(class ResourceLocation const&, std::string&) const = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?load\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual bool load(class ResourceLocation const&, std::string&, std::vector<std::string> const&) const = 0;
    /**
     * @vftbl 3
     * @symbol
     * ?load\@ResourceLoader\@\@UEBA_NAEBVResourceLocationPair\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual bool load(class ResourceLocationPair const&, std::string&, std::vector<std::string> const&) const;
    /**
     * @vftbl 4
     * @symbol
     * ?loadAllVersionsOf\@ResourcePackManager\@\@UEBA?AV?$vector\@VLoadedResourceData\@\@V?$allocator\@VLoadedResourceData\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const&) const = 0;
    /**
     * @vftbl 5
     * @symbol ?isInStreamableLocation\@ResourceLoader\@\@UEBA_NAEBVResourceLocation\@\@\@Z
     */
    virtual bool isInStreamableLocation(class ResourceLocation const&) const;
    /**
     * @vftbl 6
     * @symbol
     * ?isInStreamableLocation\@ResourceLoader\@\@UEBA_NAEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual bool isInStreamableLocation(class ResourceLocation const&, std::vector<std::string> const&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?getPath\@ResourceLoader\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const&) const;
    /**
     * @vftbl 8
     * @symbol
     * ?getPath\@ResourceLoader\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string>
    getPath(class ResourceLocation const&, std::vector<std::string> const&) const;
    /**
     * @vftbl 9
     * @symbol
     * ?getPathContainingResource\@ResourceLoader\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const&) const;
    /**
     * @vftbl 10
     * @symbol
     * ?getPathContainingResource\@ResourceLoader\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string>
    getPathContainingResource(class ResourceLocation const&, std::vector<std::string>) const;
    /**
     * @vftbl 11
     * @symbol
     * ?getPackStackIndexOfResource\@ResourceLoader\@\@UEBA?AU?$pair\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    virtual std::pair<int, std::string const&>
    getPackStackIndexOfResource(class ResourceLocation const&, std::vector<std::string> const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCELOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourceLoader();
#endif
    // NOLINTEND
};
