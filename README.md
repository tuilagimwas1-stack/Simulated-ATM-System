# ATM System Simulation (C Programming)

A step-by-step implementation and testing workflow for a C-based ATM System project developed using **Code::Blocks 25.03** with the **GNU GCC Compiler**.

---

## 🛠️ Environment & Setup
* **IDE:** Code::Blocks 25.03
* **Compiler:** GNU GCC Compiler
* **Language:** C (`<stdio.h>`, `<stdbool.h>`)
* **OS:** Windows 11

---

## 📂 Project Structure
The project is structured into progressive task files inside the `ATM` workspace:

```text
ATM/
├── main.c      # Task 1: Basic PIN Verification & Attempt Limit
├── task2.c     # Task 2: Menu Interface Integration
├── task3.c     # Task 3: Core Transaction Logic (Balance, Deposit, Withdraw)
├── task4.c     # Task 4: Modular Function Refactoring & Edge Cases
└── task5.c     # Task 5: End-to-End ATM Flow Verification
```

---

## 🚀 Incremental Development Workflow

### Task 1: Authentication & Attempts Counter (`main.c`)
* **Objective:** Implement secure PIN validation allowing up to 3 attempts.
* **Key Implementation:**
  * Define constants: `MAX_ATTEMPTS = 3`, `STORED_PIN = 4444`.
  * Track login status using boolean return values.
* **Testing & Execution:**
  * **Failed Login Flow (`task1.jpg`):** Entered invalid PINs (`1234`, `9875`, `4678`). Verified attempt counter decrements properly until maximum limit is exceeded.
  * **Successful Login Flow (`task1.2.jpg`):** Entered incorrect PINs first (`4532`, `7038`), followed by correct PIN (`4444`). Verified return state outputs `True.`.

---

### Task 2: ATM Menu Display (`task2.c`)
* **Objective:** Link authentication success to the main system menu.
* **Key Implementation:**
  * Added menu choices: `1. Balance Inquiry`, `2. Deposit`, `3. Withdraw`, `4. Exit`.
* **Testing & Execution (`task2.jpg`):**
  * Authenticated with PIN `4444`.
  * Verified that successful login triggers menu display and prompts for user action.

---

### Task 3: Transaction Logic & State Management (`task3.c`)
* **Objective:** Implement account balance updates for deposits and withdrawals.
* **Key Implementation:**
  * Global/State tracking variable: `float balance = 0.0;`.
  * Handle deposit and withdrawal input logic.
* **Testing & Execution (`task3.jpg`):**
  * **Deposit:** Deposited `$200.00`.
  * **Withdrawal:** Withdrew `$180.00`.
  * **Verification:** Output confirmed correct execution and clean exit with status `0 (0x0)`.

---

### Task 4: Extended Transactions & Sequence Checks (`task4.c`)
* **Objective:** Verify persistence and sequential operations across multiple user interactions.
* **Testing & Execution (`taskfour.jpg`):**
  1. Selected **1. Balance Inquiry** $\rightarrow$ Initial balance: `$0.00`.
  2. Selected **2. Deposit** $\rightarrow$ Amount: `$2000.00`.
  3. Selected **3. Withdraw** $\rightarrow$ Amount: `$200.00`.
  4. Selected **4. Exit** $\rightarrow$ Clean termination.

---

### Task 5: Complete ATM Session Life-Cycle (`task5.c`)
* **Objective:** Full validation of state persistence across complex user sessions.
* **Testing & Execution (`taskfive.jpg`):**
  1. Authenticated with PIN `4444`.
  2. **Deposit:** `$2000.00`
  3. **Withdraw:** `$1000.00`
  4. **Balance Inquiry:** Verified remaining balance displays accurate updated value of `$1000.00`.
  5. **Exit System:** Successfully closed runtime prompt.

---

