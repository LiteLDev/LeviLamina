#pragma once
#include <filesystem>
#include <fstream>
#include <iostream>
#include "Global.hpp"

struct PEHeader
{
    uint32_t peHeader = 0;
    uint32_t peHeaderSignature = 0;
    uint16_t machine = 0;
    uint16_t sections = 0;
    uint32_t timestamp = 0;
    uint32_t pSymbolTable = 0;
    uint32_t noOfSymbol = 0;
    uint16_t optionalHeaderSize = 0;
    uint16_t characteristics = 0;
    uint16_t dataDictionaryStart = 0;
    uint32_t dataDictionaryRVA[16]{0};
    uint32_t dataDictionarySize[16]{0};

    bool PEHeader::read(std::filesystem::path const& path)
    {
        auto file = fopen(path.string().c_str(), "r");
        if (file != nullptr)
        {
            fseek(file, 0x3c, SEEK_SET);
            fgets((char*)&peHeader, sizeof(uint32_t), file);

            fseek(file, peHeader, SEEK_SET);

            fread(&peHeaderSignature, sizeof(uint32_t), 1, file);

            fread(&machine, sizeof(uint16_t), 1, file);
            fread(&sections, sizeof(uint16_t), 1, file);
            fread(&timestamp, sizeof(uint32_t), 1, file);
            fread(&pSymbolTable, sizeof(uint32_t), 1, file);
            fread(&noOfSymbol, sizeof(uint32_t), 1, file);
            fread(&optionalHeaderSize, sizeof(uint16_t), 1, file);
            fread(&characteristics, sizeof(uint16_t), 1, file);

            dataDictionaryStart = uint16_t(ftell(file)) + 0x60;
            fseek(file, dataDictionaryStart, SEEK_SET);
            for (int i = 0; i < 16; i++)
            {
                fread(&dataDictionaryRVA[i], sizeof(uint32_t), 1, file);
                fread(&dataDictionarySize[i], sizeof(uint32_t), 1, file);
            }

            fclose(file);
            return true;
        }
        return false;
    }
    bool PEHeader::isDotNetAssembly()
    {
        return !bool(dataDictionaryRVA[7]);
    }
};