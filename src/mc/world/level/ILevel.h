#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class ILevel : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    ILevel& operator=(ILevel const&) = delete;
    ILevel(ILevel const&)            = delete;
    ILevel()                         = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ILEVEL
    /**
     * @symbol ?asLevel\@ILevel\@\@UEAAPEAVLevel\@\@XZ
     */
    MCVAPI class Level* asLevel();
    /**
     * @symbol ?asMultiPlayerLevel\@ILevel\@\@UEAAPEAVMultiPlayerLevel\@\@XZ
     */
    MCVAPI class MultiPlayerLevel* asMultiPlayerLevel();
    /**
     * @symbol ?getTradeTables\@ILevel\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables* getTradeTables();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ILevel();
#endif
    // NOLINTEND
};
