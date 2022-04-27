#pragma once
#include <MC/Objective.hpp>
#include "Types.hpp"

namespace MC
{
ref class ScoreboardId;
}

namespace MC
{
public
ref class Objective : ClassTemplate<Objective, ::Objective>
{
public:
    __ctor(Objective, ::Objective);
    inline bool SetDisplay(System::String ^ slotName, ObjectiveSortOrder sort);

#ifdef INCLUDE_MCAPI
    property ::System::String ^ DisplayName {
        ::System::String ^ get();
    }

        property ::System::String ^
        Name {
            ::System::String ^ get();
        }

        property ::System::Collections::Generic::List<MC::ScoreboardId ^> ^
        Players {
            ::System::Collections::Generic::List<MC::ScoreboardId ^> ^ get();
        }
#endif // INCLUDE_MCAPI
};
} // namespace MC
