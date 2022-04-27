#pragma once
#include <MC/ScoreboardId.hpp>
#include "Types.hpp"

namespace MC
{
ref class IdentityDefinition;
}

namespace MC
{
public
ref class ScoreboardId : ClassTemplate<ScoreboardId, ::ScoreboardId>
{
public:
    __ctor_all(ScoreboardId, ::ScoreboardId);

    ScoreboardId();

    property __int64 Id
    {
        __int64 get();
        void set(__int64 id);
    }
    property System::IntPtr Null
    {
        inline System::IntPtr get();
        inline void set(System::IntPtr p);
    }

    int GetHashCode() override;

    property unsigned long long Hash
    {
        unsigned long long get();
    }

    property bool IsValid
    {
        bool get();
    }

    ScoreboardId(long long _0);

    ScoreboardId(MC::ScoreboardId ^ _0);

    static bool operator!=(MC::ScoreboardId ^ __op, MC::ScoreboardId ^ _0);

    static bool operator==(MC::ScoreboardId ^ __op, MC::ScoreboardId ^ _0);

    virtual bool Equals(::System::Object ^ obj) override;

    static operator MC::ScoreboardId ^(long long _0);

#ifdef INCLUDE_MCAPI


#endif // INCLUDE_MCAPI
};
} // namespace MC