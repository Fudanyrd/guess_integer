makethis(){
    value=$(( RANDOM % 128 ))
    cmake -B build -DANSWER="$value"
    cmake --build build

    echo "done."
}