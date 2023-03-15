package com.rjz.cppdemo

class Calculator {

    /**
     * A native method that is implemented by the 'CalculatorDemo' native library,
     * which is packaged with this application.
     */
    external fun add(a: Int, b: Int): Int

    external fun multiply(a: Int, b: Int): Int

    external fun subtracation(a: Int, b: Int): Int

    external fun division(a: Int, b: Int): Int

    companion object {
        // Used to load the 'CalculatorDemo' library on application startup.
        init {
            System.loadLibrary("CalculatorDemo")
        }
    }
}