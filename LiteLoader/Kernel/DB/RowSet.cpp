#include <DB/RowSet.h>

namespace DB
{

RowSet::RowSet(RowHeader& header)
    : std::vector<Row>()
    , header(header)
{
}
RowSet::RowSet(const std::vector<Row>& rows, RowHeader& header)
    : std::vector<Row>(rows)
    , header(header)
{
}
RowSet::RowSet(std::vector<Row>&& rows, RowHeader& header)
    : std::vector<Row>(std::move(rows))
    , header(header)
{
}
RowSet::RowSet(RowSet&& set)
    : std::vector<Row>(std::move(set))
    , header(set.header)
{
}
RowSet::RowSet(const RowSet& set)
    : std::vector<Row>(set)
    , header(set.header)
{
}
RowSet& RowSet::operator=(RowSet&& set)
{
    std::vector<Row>::operator=(std::move(set));
    header = set.header;
    return *this;
}
RowSet& RowSet::operator=(const RowSet& set)
{
    std::vector<Row>::operator=(set);
    header = set.header;
    return *this;
}

} // namespace DB