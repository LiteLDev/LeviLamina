// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LevelChunkMetaDataDictionary {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKMETADATADICTIONARY
public:
    class LevelChunkMetaDataDictionary& operator=(class LevelChunkMetaDataDictionary const &) = delete;
    LevelChunkMetaDataDictionary(class LevelChunkMetaDataDictionary const &) = delete;
    LevelChunkMetaDataDictionary() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCHUNKMETADATADICTIONARY
public:
#endif
    MCAPI void checkAndSerialize(class std::function<void (std::string const &)>) const;
    MCAPI void deserialize(class IDataInput &);
    MCAPI class std::shared_ptr<class LevelChunkMetaData const> getMetaData(unsigned __int64) const;
    MCAPI class std::shared_ptr<class LevelChunkMetaData> registerMetaData(class LevelChunkMetaData const &);

//protected:
    MCAPI class std::shared_ptr<class LevelChunkMetaData> _registerMetaData(class LevelChunkMetaData const &);


};