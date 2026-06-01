#include "school.hpp"

School::School(
    size_t ID,

    std::string &NAME,
    int YEARESTABLISHED
    
):  m_id(std::move(ID)),
    m_name(std::move(NAME)),
    m_yearEstablished(std::move(YEARESTABLISHED)){

}