

std::vector<std::string> split(const std::string& input, char delimeter){
    std::string segment;
    std::vector<std::string> seglist;
    
    while(std::getline(input, segment, delimeter))
       seglist.push_back(segment);
       
    return sedlist;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& data)
{
  for (const auto& d : data)
	os << d << " ";
  return os;
}

template<typename T>
int bisect_left(const vector<T>& vec, T&& val){
  return lower_bound(vec.begin(),vec.end(),val)-vec.begin();
}

template<typename T, typename E>
int bisect_left(T&& vec, E&& val) {
  return lower_bound(vec.begin(), vec.end(), val) - vec.begin();
}

template<typename T>
int bisect_right(const vector<T>& vec, T&& val){
  return upper_bound(vec.begin(),vec.end(),val)-vec.begin();
}

template<typename T，typename E>
int bisect_right(T&& vec, E&& val){
  return upper_bound(vec.begin(),vec.end(),val)-vec.begin();
}


