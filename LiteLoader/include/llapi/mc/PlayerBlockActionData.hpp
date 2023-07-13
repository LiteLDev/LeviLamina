/**
 * @file  PlayerBlockActionData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct PlayerBlockActionData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERBLOCKACTIONDATA
public:
    struct PlayerBlockActionData& operator=(struct PlayerBlockActionData const &) = delete;
    PlayerBlockActionData(struct PlayerBlockActionData const &) = delete;
    PlayerBlockActionData() = delete;
#endif

public:
    /**
     * @symbol ?read\@PlayerBlockActionData\@\@SA?AV?$Result\@UPlayerBlockActionData\@\@Verror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<struct PlayerBlockActionData, class std::error_code> read(class ReadOnlyBinaryStream &);

};