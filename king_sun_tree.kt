/*
An art education program that teaches young people how to create and appreciate art, while developing key skills such as creativity and problem-solving.

File: Art Education Program.kt
*/

import kotlin.math.max

fun main (args: Array<String>) {
    
    // Declare the program name
    val programName: String = "Art Education Program"
    
    // Declare the program objectives
    val programObjectives: String = "To teach young people how to create and appreciate art, while developing key skills such as creativity and problem-solving."
    
    // Declare the list of sessions/topics
    var sessionList: MutableList<String> = mutableListOf("Drawing", "Painting", "Sculpture", "Printing", "Digital Art")
    
    // Declare the minimum and maximum age of participants
    val minAge: Int = 8
    val maxAge: Int = 18
    
    // Define the number of instructors
    var instructorCount: Int = 3
    
    // Establish the program fees
    var programFees: Double = 150.00
    
    // Establish the program duration
    val programDuration: Int = 10
    
    // Declare the list of program materials
    var materialList: MutableList<String> = mutableListOf("Pencils", "Paints", "Paintbrushes", "Paper", "Clay")
    
    // Establish ratios of instructor-to-participant
    val ratioInstructorToParticipant: Int = (maxAge - minAge) / instructorCount
    
    // Create a function to calculate the total cost of program materials
    fun calculateTotalCostOfMaterials(): Double {
        var cost: Double = 0.00
        materialList.forEach { cost += 10.00 }
        return cost
    }
    
    // Print the program name and objectives
    println("Program Name: $programName \nObjectives: $programObjectives \n")
    
    // Print the list of sessions/topics
    println("List of Sessions/Topics:")
    sessionList.forEachIndexed { index, session -> println("${index + 1}. $session") }
    
    // Print the age range of participants
    println(" \nAge Range of Participants: $minAge to $maxAge \n")
    
    // Print the number of instructors
    println("Number of Instructors: $instructorCount")
    
    // Print the program fee
    println(" \nProgram Fee: $programFees \n")
    
    // Print the program duration
    println("Program Duration: $programDuration Weeks \n")
    
    // Print the list of program materials
    println("List of Program Materials:")
    materialList.forEachIndexed { index, material -> println("${index + 1}. $material") }
    
    // Print the ratio of instructors-to-participants
    println(" \nRatio of Instructor to Participants: $ratioInstructorToParticipant \n")
    
    // Print the total cost of program materials
    println("Total Cost of Program Materials: $${calculateTotalCostOfMaterials()}")
}