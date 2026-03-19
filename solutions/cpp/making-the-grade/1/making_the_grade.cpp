#include <array>
#include <string>
#include <vector>
#include <cmath>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    
    std::vector<int> scores;

    for(auto s: student_scores) {
        scores.emplace_back(std::floor(s));
    }
    
    return scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    
    int failing = 0;

    for(int i = 0; i < student_scores.size(); i++){
        if(student_scores[i] <= 40) { failing++; }
    }
    return failing;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int split = (highest_score - 40) / 4;
    return {41, 40 + split + 1, 40 + 2 * split + 1, 40 + 3 * split + 1};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    
    int count = 1;
    std::vector<std::string> grade_sheet;
    
    for(int i = 0; i < student_scores.size(); i++){
        std::string current_student = std::to_string(count) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
        count++;
        grade_sheet.push_back(current_student);
    }
    return grade_sheet;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {

    for(int i = 0; i < student_scores.size(); i++){
        if(student_scores[i] == 100) {return student_names[i]; }
    }
    return "";
}
