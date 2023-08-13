#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class PackSettingsError : public ::PackError {

public:
    // prevent constructor by default
    PackSettingsError& operator=(PackSettingsError const&) = delete;
    PackSettingsError(PackSettingsError const&)            = delete;
    PackSettingsError()                                    = delete;

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
     * ?getLocErrorMessage\@PackSettingsError\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getLocErrorMessage() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getLocErrorMessageMap\@PackSettingsError\@\@EEBAAEBV?$unordered_map\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@H\@2\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;
    /**
     * @vftbl 3
     * @symbol
     * ?getEventErrorMessageMap\@PackSettingsError\@\@EEBAAEBV?$unordered_map\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@H\@2\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSETTINGSERROR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PackSettingsError();
#endif
    /**
     * @symbol
     * ??0PackSettingsError\@\@QEAA\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI PackSettingsError(std::vector<std::string> const&);
    // NOLINTEND
};
