#pragma once
#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

struct Config {
    float starting_alpha;
    int dimension;
    int min_count;
    int max_iterations;
    int window_size;
    int n_threads;
    float subsampling;
    bool debug;
    bool verbose;
    bool hierarchical_softmax;
    bool skip_gram;
    int negative;
    bool binary;

    Config() :
        starting_alpha(0.05),
        dimension(100),
        min_count(5),
        max_iterations(5),
        window_size(5),
        n_threads(4),
        subsampling(1e-03),
        debug(false),
        verbose(false),
        hierarchical_softmax(false),
        skip_gram(false),
        negative(5),
        binary(true)
        {}

    void print() const {
        std::cout << "Word2vec" << endl;
        std::cout << "dimension:   " << dimension << std::endl;
        std::cout << "window size: " << window_size << std::endl;
        std::cout << "min count:   " << min_count << std::endl;
        std::cout << "alpha:       " << starting_alpha << std::endl;
        std::cout << "iterations:  " << max_iterations << std::endl;
        std::cout << "threads:     " << n_threads << std::endl;
        std::cout << "subsampling: " << subsampling << std::endl;
        std::cout << "skip-gram:   " << skip_gram << std::endl;
        std::cout << "negative:    " << negative << std::endl;
    }
};

void Main(string train_file, string output_file, Config config);