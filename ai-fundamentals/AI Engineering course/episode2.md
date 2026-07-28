# Day 1- My first LLM Application 

## Goal
Today I took my first step into AI Engineering by understanding how Large Language Models (LLMs) work and writing my first Python program that makes an LLM API call.

## What I Learned: 

1. Virtual Environment (venv)

A virtual environment allows each Python project to have its own isolated dependencies without affecting other projects on the system.

Why it is useful

- Keeps project dependencies separate
- Prevents version conflicts
- Makes projects reproducible
- Easy to share with others

2. What an LLM API Call Looks Like

An LLM request mainly consists of four parts:

Application
      │
      ▼
API Request
      │
      ├── API Key
      ├── Model
      └── Messages
             ├── Role
             └── Content
      │
      ▼
LLM
      │
      ▼
Response
      ├── Choices
      └── Usage (Prompt Tokens, Completion Tokens, Total Tokens)

3. API Key

Used to authenticate requests to the LLM provider.

api_key = "YOUR_API_KEY"

4. Model

The model determines which AI model processes the request.

Example:

model="llama-3.3-70b-versatile"

5. Messages

Messages tell the model what to do.

Each message contains:

- Role :
  system
  user
  assistant
- Content :
  The actual prompt or instruction.

Example:

messages=[
    {
        "role": "user",
        "content": "Explain what an API is."
    }
]

6. Understanding the Response

The API returns several pieces of information.

Choices :

Contains the generated response from the model.

Example:

response.choices[0].message.content

- Usage

Shows token consumption.

Example:

Prompt Tokens
Completion Tokens
Total Tokens

This helps measure API usage and cost.

### What I Built

✔ Created my first Python script

✔ Successfully made my first LLM API call

✔ Received a response from the model

✔ Printed the AI-generated output

✔ Explored the response structure

✔ Learned about token usage

### Tech Stack
Python 3.11
UV
Virtual Environment (venv)
VS Code
Groq API
LLM

### Key Takeaways
- Learned why virtual environments are important.
- Understood the structure of an LLM request.
- Learned how prompts are sent using messages.
- Understood the role of API keys and models.
- Explored how LLM responses are structured.
- Learned what tokens are and how API usage is measured.
- Successfully wrote my first AI application.

